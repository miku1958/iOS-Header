//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying>
{
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)accountChanged;
+ (id)appDidBecomeActive;
+ (id)clearPlayHistory;
+ (id)entitlements;
+ (id)favorites;
+ (id)locationAuthorizationChanged;
+ (id)playActivity;
+ (id)playHistoryUpdated;
+ (id)postPlay;
+ (id)preferredVideoFormat;
+ (id)purchases;
+ (id)removeFromPlayHistory;
+ (id)restrictions;
+ (id)settings;
+ (id)upNext;
+ (id)utsk;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEventType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

