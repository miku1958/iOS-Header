//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FCSectionProviding;

@interface FCChannelSectionHeadlinesOperationGroup : NSObject
{
    id<FCSectionProviding> _section;
    NSArray *_headlines;
}

@property (strong, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
@property (strong, nonatomic) id<FCSectionProviding> section; // @synthesize section=_section;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSection:(id)arg1 headlines:(id)arg2;

@end

