//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManager/NSSecureCoding-Protocol.h>

@class NSString;

@interface DOCSearchContext : NSObject <NSSecureCoding>
{
    BOOL _isSearching;
    NSString *_searchString;
}

@property (nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property (copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
