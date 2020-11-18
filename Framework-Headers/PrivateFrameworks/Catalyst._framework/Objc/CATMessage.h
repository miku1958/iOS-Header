//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Catalyst/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface CATMessage : NSObject <NSSecureCoding>
{
    NSUUID *_messageUUID;
}

@property (strong, nonatomic) NSUUID *messageUUID; // @synthesize messageUUID=_messageUUID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

