//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface MSIdleAutosaveItem : NSObject <NSSecureCoding>
{
    NSString *_autosaveIdentifier;
    NSString *_subject;
}

@property (readonly, copy, nonatomic) NSString *autosaveIdentifier; // @synthesize autosaveIdentifier=_autosaveIdentifier;
@property (readonly, copy, nonatomic) NSString *subject; // @synthesize subject=_subject;

+ (BOOL)supportsSecureCoding;
+ (id)withAutosaveIdentifier:(id)arg1 subject:(id)arg2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAutosaveIdentifier:(id)arg1 subject:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

