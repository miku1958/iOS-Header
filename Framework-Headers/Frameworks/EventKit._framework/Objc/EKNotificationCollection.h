//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject
{
}

@property (copy, nonatomic) NSSet *notifications;
@property (readonly, nonatomic) EKSource *source;

+ (Class)frozenClass;
+ (BOOL)isWeakRelationship;
+ (id)knownRelationshipMultiValueKeys;
- (BOOL)_hasNotificationsCollectionFlag;
- (void)_setNotificationsCollectionFlag;
- (void)addNotification:(id)arg1;
- (BOOL)commit:(id *)arg1;
- (unsigned int)flags;
- (id)initWithOptions:(id)arg1;
- (void)removeNotification:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalIDTag:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setSource:(id)arg1;
- (BOOL)validate:(id *)arg1;

@end

