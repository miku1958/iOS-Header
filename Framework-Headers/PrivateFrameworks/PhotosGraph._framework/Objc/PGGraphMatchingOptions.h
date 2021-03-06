//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface PGGraphMatchingOptions : NSObject
{
    BOOL _needsKeywords;
    unsigned short _targetEventDomain;
    unsigned long long _relatedType;
    NSSet *_focusedNodes;
    NSArray *_sortDescriptors;
}

@property (strong, nonatomic) NSSet *focusedNodes; // @synthesize focusedNodes=_focusedNodes;
@property (nonatomic) BOOL needsKeywords; // @synthesize needsKeywords=_needsKeywords;
@property (nonatomic) unsigned long long relatedType; // @synthesize relatedType=_relatedType;
@property (strong, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property (nonatomic) unsigned short targetEventDomain; // @synthesize targetEventDomain=_targetEventDomain;

+ (unsigned short)defaultTargetEventDomain;
+ (id)optionsWithRelatedType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)init;

@end

