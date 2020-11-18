//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFLocationSnapshotMutating-Protocol.h>

@class AFLocationSnapshot, NSNumber, NSString;

@interface _AFLocationSnapshotMutation : NSObject <AFLocationSnapshotMutating>
{
    AFLocationSnapshot *_baseModel;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_altitude;
    NSNumber *_direction;
    NSNumber *_speed;
    NSNumber *_verticalAccuracy;
    NSNumber *_horizontalAccuracy;
    BOOL _preciseLocationEnabled;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasLatitude:1;
        unsigned int hasLongitude:1;
        unsigned int hasAltitude:1;
        unsigned int hasDirection:1;
        unsigned int hasSpeed:1;
        unsigned int hasVerticalAccuracy:1;
        unsigned int hasHorizontalAccuracy:1;
        unsigned int hasPreciseLocationEnabled:1;
    } _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAltitude:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setHorizontalAccuracy:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setPreciseLocationEnabled:(BOOL)arg1;
- (void)setSpeed:(id)arg1;
- (void)setVerticalAccuracy:(id)arg1;

@end
