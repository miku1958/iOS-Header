//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PKFieldMetadata : NSObject <NSSecureCoding>
{
    BOOL _shouldIgnoreField;
    BOOL _foundExplicitlyRequestedPass;
    NSArray *_associatedPassIdentifiers;
}

@property (readonly, copy, nonatomic) NSArray *associatedPassIdentifiers; // @synthesize associatedPassIdentifiers=_associatedPassIdentifiers;
@property (readonly, nonatomic) BOOL foundExplicitlyRequestedPass; // @synthesize foundExplicitlyRequestedPass=_foundExplicitlyRequestedPass;
@property (readonly, nonatomic) BOOL shouldIgnoreField; // @synthesize shouldIgnoreField=_shouldIgnoreField;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAssociatedPassIdentifiers:(id)arg1 shouldIgnoreField:(BOOL)arg2 foundExplicitlyRequestedPass:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;

@end
