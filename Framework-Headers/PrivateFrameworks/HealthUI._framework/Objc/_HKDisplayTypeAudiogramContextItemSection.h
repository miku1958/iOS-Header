//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDisplayTypeContextItemSection-Protocol.h>

@class NSArray, NSString;

@interface _HKDisplayTypeAudiogramContextItemSection : NSObject <HKDisplayTypeContextItemSection>
{
    NSString *_title;
    NSArray *_items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;

@end

