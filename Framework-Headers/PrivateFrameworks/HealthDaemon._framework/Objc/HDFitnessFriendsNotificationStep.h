//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HDFitnessFriendsNotificationStep : NSObject
{
    NSSet *_recordTypes;
    CDUnknownBlockType _objectsTransformationBlock;
    CDUnknownBlockType _objectTransformationBlock;
    CDUnknownBlockType _shouldNotifyObserverBlock;
    CDUnknownBlockType _notifyObserverBlock;
    CDUnknownBlockType _reportingBlock;
}

@property (copy, nonatomic) CDUnknownBlockType notifyObserverBlock; // @synthesize notifyObserverBlock=_notifyObserverBlock;
@property (copy, nonatomic) CDUnknownBlockType objectTransformationBlock; // @synthesize objectTransformationBlock=_objectTransformationBlock;
@property (copy, nonatomic) CDUnknownBlockType objectsTransformationBlock; // @synthesize objectsTransformationBlock=_objectsTransformationBlock;
@property (strong, nonatomic) NSSet *recordTypes; // @synthesize recordTypes=_recordTypes;
@property (copy, nonatomic) CDUnknownBlockType reportingBlock; // @synthesize reportingBlock=_reportingBlock;
@property (copy, nonatomic) CDUnknownBlockType shouldNotifyObserverBlock; // @synthesize shouldNotifyObserverBlock=_shouldNotifyObserverBlock;

- (void).cxx_destruct;
- (id)objectsTransformedFromRecords:(id)arg1 cloudKitManager:(id)arg2;

@end

