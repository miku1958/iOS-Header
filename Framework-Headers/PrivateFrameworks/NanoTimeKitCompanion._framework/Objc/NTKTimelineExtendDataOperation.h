//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation
{
    NSDate *_boundaryDate;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_extendRight;
- (void)_invokeHandlerWithEntries:(id)arg1;
- (void)_start;
- (void)setExtendsRightFromDate:(id)arg1;

@end
