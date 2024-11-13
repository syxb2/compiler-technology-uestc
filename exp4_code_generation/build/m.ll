; ModuleID = './test/test.c'
source_filename = "./test/test.c"
target datalayout = "e-m:o-i64:64-i128:128-n32:64-S128-Fn32"
target triple = "arm64-apple-macosx15.0.0"

; Function Attrs: noinline nounwind optnone ssp uwtable(sync)
define i32 @test() #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 5, ptr %1, align 4
  store i32 3, ptr %2, align 4
  %4 = load i32, ptr %1, align 4
  %5 = load i32, ptr %2, align 4
  %6 = add nsw i32 %4, %5
  store i32 %6, ptr %1, align 4
  %7 = load i32, ptr %1, align 4
  %8 = load i32, ptr %2, align 4
  %9 = icmp sgt i32 %7, %8
  br i1 %9, label %10, label %16

10:                                               ; preds = %0
  %11 = load i32, ptr %1, align 4
  %12 = load i32, ptr %2, align 4
  %13 = mul nsw i32 %11, %12
  store i32 %13, ptr %3, align 4
  %14 = load i32, ptr %2, align 4
  %15 = add nsw i32 %14, 2
  store i32 %15, ptr %1, align 4
  br label %20

16:                                               ; preds = %0
  %17 = load i32, ptr %1, align 4
  %18 = load i32, ptr %2, align 4
  %19 = add nsw i32 %17, %18
  store i32 %19, ptr %3, align 4
  br label %20

20:                                               ; preds = %16, %10
  br label %21

21:                                               ; preds = %25, %20
  %22 = load i32, ptr %1, align 4
  %23 = load i32, ptr %3, align 4
  %24 = icmp sle i32 %22, %23
  br i1 %24, label %25, label %31

25:                                               ; preds = %21
  %26 = load i32, ptr %1, align 4
  %27 = load i32, ptr %2, align 4
  %28 = add nsw i32 %26, %27
  store i32 %28, ptr %1, align 4
  %29 = load i32, ptr %2, align 4
  %30 = sub nsw i32 %29, 1
  store i32 %30, ptr %2, align 4
  br label %21, !llvm.loop !5

31:                                               ; preds = %21
  %32 = load i32, ptr %3, align 4
  ret i32 %32
}

attributes #0 = { noinline nounwind optnone ssp uwtable(sync) "frame-pointer"="non-leaf" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="apple-m1" "target-features"="+aes,+altnzcv,+ccdp,+ccidx,+complxnum,+crc,+dit,+dotprod,+flagm,+fp-armv8,+fp16fml,+fptoint,+fullfp16,+jsconv,+lse,+neon,+pauth,+perfmon,+predres,+ras,+rcpc,+rdm,+sb,+sha2,+sha3,+specrestrict,+ssbs,+v8.1a,+v8.2a,+v8.3a,+v8.4a,+v8a,+zcm,+zcz" }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 8, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 1}
!3 = !{i32 7, !"frame-pointer", i32 1}
!4 = !{!"Homebrew clang version 19.1.3"}
!5 = distinct !{!5, !6}
!6 = !{!"llvm.loop.mustprogress"}
