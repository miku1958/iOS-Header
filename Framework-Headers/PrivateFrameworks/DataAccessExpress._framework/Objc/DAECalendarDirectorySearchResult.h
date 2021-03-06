//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataAccessExpress/NSSecureCoding-Protocol.h>

@class NSString;

@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSString *_preferredAddress;
    NSString *_principalPath;
}

@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong, nonatomic) NSString *preferredAddress; // @synthesize preferredAddress=_preferredAddress;
@property (strong, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

