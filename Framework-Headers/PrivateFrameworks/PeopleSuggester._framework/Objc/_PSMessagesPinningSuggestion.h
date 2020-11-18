//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSString;

@interface _PSMessagesPinningSuggestion : NSObject <NSSecureCoding>
{
    NSString *_chatGuid;
}

@property (readonly, nonatomic) NSString *chatGuid; // @synthesize chatGuid=_chatGuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChatGuid:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
