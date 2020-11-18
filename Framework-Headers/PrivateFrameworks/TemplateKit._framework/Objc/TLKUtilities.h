//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TLKUtilities : NSObject
{
}

+ (BOOL)deviceSupportsRotation;
+ (void)dispatchAsyncIfNecessary:(CDUnknownBlockType)arg1;
+ (void)dispatchMainIfNecessary:(CDUnknownBlockType)arg1;
+ (double)onePixelForCurrentScreenResolution;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)arg1 forTappedView:(id)arg2;
+ (struct UIEdgeInsets)standardInsets;
+ (double)standardTableCellContentInset;
+ (id)testImageWithSize:(struct CGSize)arg1;
+ (id)testImageWithSize:(struct CGSize)arg1 text:(id)arg2;

@end
