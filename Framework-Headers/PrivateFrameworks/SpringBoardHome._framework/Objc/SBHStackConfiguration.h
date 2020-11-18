//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSCopying-Protocol.h>
#import <SpringBoardHome/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SBHStackConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allowsSuggestions;
    BOOL _allowsExternalSuggestions;
    NSArray *_dataSources;
    unsigned long long _sizeClass;
}

@property (nonatomic) BOOL allowsExternalSuggestions; // @synthesize allowsExternalSuggestions=_allowsExternalSuggestions;
@property (nonatomic) BOOL allowsSuggestions; // @synthesize allowsSuggestions=_allowsSuggestions;
@property (copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property (nonatomic) unsigned long long sizeClass; // @synthesize sizeClass=_sizeClass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
