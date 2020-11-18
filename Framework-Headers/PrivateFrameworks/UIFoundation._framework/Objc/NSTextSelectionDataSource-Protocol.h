//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSTextRange;
@protocol NSTextLocation;

@protocol NSTextSelectionDataSource <NSObject>

@property (readonly) NSTextRange *documentRange;

- (long long)baseWritingDirectionAtLocation:(id<NSTextLocation>)arg1;
- (void)enumerateCaretOffsetsInLineFragmentAtLocation:(id<NSTextLocation>)arg1 usingBlock:(void (^)(double, id<NSTextLocation>, BOOL, BOOL *))arg2;
- (void)enumerateSubstringsFromLocation:(id<NSTextLocation>)arg1 options:(unsigned long long)arg2 usingBlock:(void (^)(NSString *, NSTextRange *, NSTextRange *, BOOL *))arg3;
- (NSTextRange *)lineFragmentRangeForPoint:(struct CGPoint)arg1 inContainerAtLocation:(id<NSTextLocation>)arg2;
- (id<NSTextLocation>)locationFromLocation:(id<NSTextLocation>)arg1 offset:(long long)arg2;
- (long long)offsetFromLocation:(id<NSTextLocation>)arg1 toLocation:(id<NSTextLocation>)arg2;
- (NSTextRange *)textRangeForSelectionGranularity:(long long)arg1 enclosingLocation:(id<NSTextLocation>)arg2;

@optional
- (void)enumerateContainerBoundariesFromLocation:(id<NSTextLocation>)arg1 reverse:(BOOL)arg2 usingBlock:(void (^)(id<NSTextLocation>, BOOL *))arg3;
- (long long)layoutOrientationAtLocation:(id<NSTextLocation>)arg1;
@end
