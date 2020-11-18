//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCGamepad.h>

#import <GameController/_GCSnapshot-Protocol.h>

@class GCMotion, NSData, NSString;

@interface _GCMicroGamepadSnapshot : _GCGamepad <_GCSnapshot>
{
    NSData *_snapshotData;
    GCMotion *_motion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSData *snapshotData; // @synthesize snapshotData=_snapshotData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
- (id)motion;
- (void)set_motion:(id)arg1;

@end

