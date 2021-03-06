//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLModeling-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata, NSObject, NSXPCConnection;
@protocol CoreMLModelSecurityProtocol;

@interface MLSecureModel : MLModel <MLModeling, NSSecureCoding>
{
    NSXPCConnection *_connectionToModelSecurityService;
    NSObject<CoreMLModelSecurityProtocol> *_secureModelProxy;
}

@property (strong, nonatomic) NSXPCConnection *connectionToModelSecurityService; // @synthesize connectionToModelSecurityService=_connectionToModelSecurityService;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;
@property (strong, nonatomic) MLModelDescription *modelDescription;
@property (strong, nonatomic) NSObject<CoreMLModelSecurityProtocol> *secureModelProxy; // @synthesize secureModelProxy=_secureModelProxy;

+ (id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 decryptCredential:(id)arg3 error:(id *)arg4;
+ (id)modelWithContentsOfURL:(id)arg1 decryptCredential:(id)arg2 error:(id *)arg3;
+ (id)sandboxExtensionPathsForModelURL:(id)arg1;
+ (id)sandboxExtensionTokenForModelURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 error:(id *)arg2;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

