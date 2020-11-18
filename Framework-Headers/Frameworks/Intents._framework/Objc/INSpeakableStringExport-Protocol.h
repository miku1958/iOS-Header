//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol INSpeakableStringExport <NSObject, JSExport>

@property (strong, nonatomic) NSString *identifier;
@property (strong, nonatomic) NSString *pronunciationHint;
@property (strong, nonatomic) NSString *spokenPhrase;
@property (strong, nonatomic) NSString *vocabularyIdentifier;

- (id)init;
@end

