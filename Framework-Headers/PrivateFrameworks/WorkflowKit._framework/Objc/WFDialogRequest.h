//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString, WFDialogAttribution;

@interface WFDialogRequest : NSObject <NSSecureCoding>
{
    WFDialogAttribution *_attribution;
    NSString *_prompt;
}

@property (readonly, nonatomic) WFDialogAttribution *attribution; // @synthesize attribution=_attribution;
@property (readonly, copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppBundleIdentifier:(id)arg1 prompt:(id)arg2;
- (id)initWithAttribution:(id)arg1 prompt:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

