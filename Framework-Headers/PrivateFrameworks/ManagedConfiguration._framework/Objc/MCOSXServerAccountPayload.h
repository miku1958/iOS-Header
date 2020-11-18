//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSNumber, NSString;

@interface MCOSXServerAccountPayload : MCPayload
{
    BOOL _documentsConfigured;
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSArray *_configuredAccounts;
    NSNumber *_documentsPort;
}

@property (readonly, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property (readonly, nonatomic) NSArray *configuredAccounts; // @synthesize configuredAccounts=_configuredAccounts;
@property (readonly, nonatomic) BOOL documentsConfigured; // @synthesize documentsConfigured=_documentsConfigured;
@property (readonly, nonatomic) NSNumber *documentsPort; // @synthesize documentsPort=_documentsPort;
@property (readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end
