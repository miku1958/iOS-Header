//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSIndexQueuableItem-Protocol.h>

@class CSSearchableItem, CSUserAction, NSString;

@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem>
{
    CSUserAction *_action;
    CSSearchableItem *_item;
    NSString *_protectionClass;
}

@property (strong) CSUserAction *action; // @synthesize action=_action;
@property (strong) CSSearchableItem *item; // @synthesize item=_item;
@property (strong) NSString *protectionClass; // @synthesize protectionClass=_protectionClass;

- (void).cxx_destruct;
- (id)initWithAction:(id)arg1 item:(id)arg2;
- (id)searchableItem;

@end
