//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SearchUITLKImageConverter : NSObject
{
}

+ (BOOL)checkTransparencyForImageAtCorners:(id)arg1;
+ (void)executeBlock:(CDUnknownBlockType)arg1 async:(BOOL)arg2;
+ (BOOL)hasTransparencyAtPoint:(struct CGPoint)arg1 forImage:(id)arg2;
+ (id)imageForSearchUIImage:(id)arg1;
+ (id)imageForSearchUIImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)imageIsProbablyOpaque:(id)arg1;
+ (id)imagesForSearchUIImages:(id)arg1;

@end

