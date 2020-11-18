//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSUserDefaults-Protocol.h>

@protocol IKAppUserDefaultsStoring;

@interface IKJSUserDefaults : IKJSObject <IKJSUserDefaults>
{
    id<IKAppUserDefaultsStoring> _userDefaultsStorage;
}

@property (weak, nonatomic) id<IKAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;

- (void).cxx_destruct;
- (id)getData:(id)arg1;
- (id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2;
- (void)removeData:(id)arg1;
- (void)setData:(id)arg1:(id)arg2;

@end

