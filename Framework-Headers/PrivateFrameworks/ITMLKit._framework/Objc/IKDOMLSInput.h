//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDOMLSInput-Protocol.h>

@class NSString;

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput>
{
    BOOL _certifiedText;
    id _byteStream;
    NSString *_stringData;
    NSString *_encoding;
}

@property (strong, nonatomic) id byteStream; // @synthesize byteStream=_byteStream;
@property (nonatomic) BOOL certifiedText; // @synthesize certifiedText=_certifiedText;
@property (strong, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property (strong, nonatomic) NSString *stringData; // @synthesize stringData=_stringData;

- (void).cxx_destruct;

@end

