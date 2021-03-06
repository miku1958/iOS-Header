//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RKMessageResponseManager;
@protocol TILinguisticDataSourceMessage;

@interface TIRecipientModel : NSObject
{
    NSString *_identifier;
    RKMessageResponseManager *_trainer;
    id<TILinguisticDataSourceMessage> _lastMessage;
}

@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) id<TILinguisticDataSourceMessage> lastMessage; // @synthesize lastMessage=_lastMessage;
@property (strong, nonatomic) RKMessageResponseManager *trainer; // @synthesize trainer=_trainer;

- (void).cxx_destruct;
- (void)handleMessages:(id)arg1;
- (id)initWithCompositeName:(id)arg1 andTrainer:(id)arg2;
- (id)languageGuessForString:(id)arg1;

@end

