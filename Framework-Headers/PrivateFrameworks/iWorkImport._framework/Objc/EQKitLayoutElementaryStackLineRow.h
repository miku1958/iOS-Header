//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/EQKitLayoutElementaryStackRow-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EQKitLayoutElementaryStackLineRow : NSObject <EQKitLayoutElementaryStackRow>
{
    unsigned long long mLength;
    double mThickness;
    long long mAlignmentShift;
    unsigned long long mFirstColumnIndex;
    double mFollowingSpace;
}

@property (readonly, nonatomic) long long alignmentShift; // @synthesize alignmentShift=mAlignmentShift;
@property (readonly, nonatomic) unsigned long long columnCount; // @synthesize columnCount=mLength;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long firstColumnIndex; // @synthesize firstColumnIndex=mFirstColumnIndex;
@property (readonly, nonatomic) double followingSpace; // @synthesize followingSpace=mFollowingSpace;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL spansStack;
@property (readonly) Class superclass;

- (id)initWithLength:(unsigned long long)arg1 thickness:(double)arg2 position:(long long)arg3 followingSpace:(double)arg4;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(__wrap_iter_8fb6ff7c)arg2 iterMax:(__wrap_iter_8fb6ff7c)arg3 previousRow:(id)arg4 layoutManager:(const struct EQKitLayoutManager *)arg5;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;

@end
