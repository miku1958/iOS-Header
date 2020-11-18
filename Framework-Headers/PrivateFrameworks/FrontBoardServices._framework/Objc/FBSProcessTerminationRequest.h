//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class NSString;
@protocol FBSProcess;

@interface FBSProcessTerminationRequest : NSObject <NSCopying, BSDescriptionProviding>
{
    id<FBSProcess> _process;
    NSString *_label;
    unsigned long long _options;
    long long _reportType;
    long long _exceptionCode;
    NSString *_explanation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long exceptionCode; // @synthesize exceptionCode=_exceptionCode;
@property (copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (weak, nonatomic) id<FBSProcess> process; // @synthesize process=_process;
@property (nonatomic) long long reportType; // @synthesize reportType=_reportType;
@property (readonly) Class superclass;

+ (id)requestForProcess:(id)arg1 withLabel:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)execute;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

