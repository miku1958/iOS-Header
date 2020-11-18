//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BrailleTranslation/BRLTTranslationServiceInterface-Protocol.h>

@class BRLTSTranslator;
@protocol OS_dispatch_queue;

@interface BRLTSTranslationService : NSObject <BRLTTranslationServiceInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    BRLTSTranslator *_queueTranslator;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) BRLTSTranslator *queueTranslator; // @synthesize queueTranslator=_queueTranslator;

+ (id)exportedInterface;
- (void).cxx_destruct;
- (void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)init;
- (void)loadBrailleBundleForIdentifier:(id)arg1;
- (void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(CDUnknownBlockType)arg3;

@end
