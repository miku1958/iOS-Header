//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INIntent, NSNumber;

@interface WFWidgetOptions : NSObject
{
    INIntent *_intent;
    unsigned long long _sizeClass;
    NSNumber *_cornerRadius;
}

@property (strong, nonatomic) NSNumber *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property (nonatomic) unsigned long long sizeClass; // @synthesize sizeClass=_sizeClass;

- (void).cxx_destruct;

@end
