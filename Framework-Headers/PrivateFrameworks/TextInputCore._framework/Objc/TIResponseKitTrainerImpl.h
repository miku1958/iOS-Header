//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInputCore/TIResponseKitTrainer-Protocol.h>

@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>
{
}

+ (id)sharedTrainer;
- (id)_init;
- (BOOL)moveLanguageModelBundlesFromTemporaryDirectory:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;
- (void)performTrainingForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
