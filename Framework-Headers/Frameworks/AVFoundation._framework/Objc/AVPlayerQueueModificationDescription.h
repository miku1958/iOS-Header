//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerItem;

@interface AVPlayerQueueModificationDescription : NSObject
{
    long long _modificationType;
    AVPlayerItem *_item;
    AVPlayerItem *_afterItem;
}

@property (readonly, nonatomic) AVPlayerItem *afterItem; // @synthesize afterItem=_afterItem;
@property (readonly, nonatomic) AVPlayerItem *item; // @synthesize item=_item;
@property (readonly, nonatomic) long long modificationType; // @synthesize modificationType=_modificationType;

+ (id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2;
+ (id)modificationForRemovingItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithModificationType:(long long)arg1 item:(id)arg2 afterItem:(id)arg3;

@end

