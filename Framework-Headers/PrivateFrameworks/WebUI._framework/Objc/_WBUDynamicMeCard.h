//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSMutableArray;

@interface _WBUDynamicMeCard : NSObject
{
    NSMutableArray *_blocksPendingMeCard;
    CNContact *_me;
    BOOL _meCardExists;
}

@property (readonly, nonatomic) BOOL meCardExists; // @synthesize meCardExists=_meCardExists;

+ (id)_contactObjectComponentForString:(id)arg1;
- (void).cxx_destruct;
- (void)_meCardChanged:(id)arg1;
- (id)init;
- (id)me;
- (void)performWhenReady:(CDUnknownBlockType)arg1;
- (id)valueForProperty:(id)arg1 contact:(id)arg2;

@end

