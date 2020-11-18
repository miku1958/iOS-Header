//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPAVItemPlaylistIdentifier-Protocol.h>

@class MPQueueFeeder, NSString;
@protocol MPAVItemQueueIdentifier;

@interface _MPCAVItemSourceContext : NSObject <MPAVItemPlaylistIdentifier>
{
    id<MPAVItemQueueIdentifier> _itemIdentifier;
    MPQueueFeeder *_queueFeeder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<MPAVItemQueueIdentifier> itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (strong, nonatomic) MPQueueFeeder *queueFeeder; // @synthesize queueFeeder=_queueFeeder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

