//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerChangeItemCommand-Protocol.h>

@class NSString;

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand>
{
    unsigned long long _changeItemSupport;
}

@property (readonly, nonatomic) unsigned long long changeItemSupport; // @synthesize changeItemSupport=_changeItemSupport;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)changeToItem:(id)arg1;
- (id)changeToSection:(id)arg1;
- (id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2;
- (id)nextChapter;
- (id)nextItem;
- (id)nextSection;
- (id)previousChapter;
- (id)previousItem;
- (id)previousItemDeferringToPlaybackQueuePosition;
- (id)previousSection;

@end

