//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDOMEventException-Protocol.h>

@interface IKDOMEventException : IKJSObject <IKJSDOMEventException>
{
    long long code;
}

@property (nonatomic) long long code; // @synthesize code;

+ (id)exceptionWithAppContext:(id)arg1 code:(long long)arg2;

@end

