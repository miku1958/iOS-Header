//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWScript-Protocol.h>

@class NSString, WKUserScript;

@interface SWSetupScript : NSObject <SWScript>
{
    BOOL queueable;
    NSString *executableScript;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *executableScript; // @synthesize executableScript;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL queueable; // @synthesize queueable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKUserScript *userScript;

- (void).cxx_destruct;

@end
