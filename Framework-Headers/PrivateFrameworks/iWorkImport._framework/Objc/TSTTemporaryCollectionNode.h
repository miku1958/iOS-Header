//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTTemporaryCollectionNode : NSObject
{
    struct TSCEVectorIndexPair _dimensions;
    NSMutableArray *_children;
    NSString *_whitespaceBeforeFirstChild;
    NSMutableArray *_whitespaceAfterDelimiters;
    unsigned long long _firstIndex;
    unsigned long long _lastIndex;
}

@property (strong, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property (nonatomic) struct TSCEVectorIndexPair dimensions; // @synthesize dimensions=_dimensions;
@property (nonatomic) unsigned long long firstIndex; // @synthesize firstIndex=_firstIndex;
@property (nonatomic) unsigned long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property (strong, nonatomic) NSMutableArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=_whitespaceAfterDelimiters;
@property (strong, nonatomic) NSString *whitespaceBeforeFirstChild; // @synthesize whitespaceBeforeFirstChild=_whitespaceBeforeFirstChild;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end

