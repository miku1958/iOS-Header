//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSString;

@interface SIRINLURequestID : NSObject <NSSecureCoding>
{
    NSString *_idAsString;
    NSString *_connectionID;
}

@property (strong, nonatomic) NSString *connectionID; // @synthesize connectionID=_connectionID;
@property (strong, nonatomic) NSString *idAsString; // @synthesize idAsString=_idAsString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdAsString:(id)arg1 connectionID:(id)arg2;

@end

