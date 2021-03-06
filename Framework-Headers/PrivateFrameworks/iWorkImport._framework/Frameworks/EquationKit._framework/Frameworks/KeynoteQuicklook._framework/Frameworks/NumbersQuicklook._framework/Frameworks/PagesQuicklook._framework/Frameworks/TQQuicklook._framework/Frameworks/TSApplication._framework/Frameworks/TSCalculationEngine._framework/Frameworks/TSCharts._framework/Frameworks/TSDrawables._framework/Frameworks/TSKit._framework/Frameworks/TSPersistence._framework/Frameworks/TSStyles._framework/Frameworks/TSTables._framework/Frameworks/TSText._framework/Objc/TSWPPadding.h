//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/TSDMixing-Protocol.h>
#import <TSText/TSSPropertyCommandSerializing-Protocol.h>
#import <TSText/TSSPropertyValueArchiving-Protocol.h>

@class NSString;

@interface TSWPPadding : NSObject <TSSPropertyValueArchiving, TSSPropertyCommandSerializing, TSDMixing>
{
    double _topInset;
    double _leftInset;
    double _bottomInset;
    double _rightInset;
}

@property (nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property (nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property (readonly) Class superclass;
@property (nonatomic) double topInset; // @synthesize topInset=_topInset;

+ (id)instanceWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;
+ (id)padding;
+ (id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (id)initWithArchive:(const struct PaddingArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)paddingByMirroringHorizontal;
- (void)saveToArchive:(struct PaddingArchive *)arg1 archiver:(id)arg2;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (void)transform:(struct CGAffineTransform)arg1;

@end

