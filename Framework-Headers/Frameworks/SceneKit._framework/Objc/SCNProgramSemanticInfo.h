//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding>
{
    NSString *_semantic;
    NSDictionary *_options;
}

@property (strong, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (copy, nonatomic) NSString *semantic; // @synthesize semantic=_semantic;

+ (id)infoWithSemantic:(id)arg1 options:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

