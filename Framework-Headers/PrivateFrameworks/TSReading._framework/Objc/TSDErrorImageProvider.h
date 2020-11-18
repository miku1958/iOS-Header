//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDImageProvider.h>

@interface TSDErrorImageProvider : TSDImageProvider
{
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (BOOL)isError;
- (BOOL)isValid;
- (struct CGSize)naturalSize;
- (struct CGPDFDocument *)p_iconPDFDocument;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

