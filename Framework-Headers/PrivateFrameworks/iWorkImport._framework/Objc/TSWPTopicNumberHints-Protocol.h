//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSObject-Protocol.h>

@class NSDictionary, NSObject, TSWPListStyle;
@protocol TSWPTopicNumberHints;

@protocol TSWPTopicNumberHints <NSObject, NSCopying>
- (unsigned long long)charIndex;
- (unsigned long long)charIndexValidThrough;
- (NSDictionary *)entries;
- (BOOL)isEquivalentStateToTopicNumberHints:(NSObject<TSWPTopicNumberHints> *)arg1;
- (unsigned long long)nextTopicNumberForList:(TSWPListStyle *)arg1 level:(unsigned long long)arg2;
- (unsigned long long)previousCharIndexForList:(TSWPListStyle *)arg1 level:(unsigned long long)arg2;
@end
