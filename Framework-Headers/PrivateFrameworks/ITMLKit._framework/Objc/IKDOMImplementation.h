//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDOMImplementation-Protocol.h>
#import <ITMLKit/IKJSDOMImplementationLS-Protocol.h>

@interface IKDOMImplementation : IKJSObject <IKJSDOMImplementation, IKJSDOMImplementationLS>
{
}

- (id)createDocument:(id)arg1:(id)arg2;
- (id)createLSInput;
- (id)createLSParser:(long long)arg1:(id)arg2;
- (id)createLSSerializer;

@end
