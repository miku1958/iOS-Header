//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFMessageBodyConsumableInnerTextNode-Protocol.h>

@class NSArray;

@protocol MFMessageBodyElement <MFMessageBodyConsumableInnerTextNode>

@property (strong, nonatomic) NSArray *nodes;

- (unsigned long long)quoteLevel;
- (int)valueForAttributes:(int)arg1;
@end
