//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFGallerySessionSearchEvent : WFEvent
{
    NSString *_key;
    NSString *_sessionIdentifier;
}

@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;

+ (Class)codableEventClass;
- (void).cxx_destruct;

@end
