//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolCSSDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController *)arg1;
- (void)mediaQueryResultChanged;
- (void)styleSheetAddedWithHeader:(id)arg1;
- (void)styleSheetChangedWithStyleSheetId:(id)arg1;
- (void)styleSheetRemovedWithStyleSheetId:(id)arg1;

@end

