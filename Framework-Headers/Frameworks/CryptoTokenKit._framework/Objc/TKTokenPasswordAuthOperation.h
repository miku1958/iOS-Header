//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKTokenAuthOperation.h>

@class NSString;

@interface TKTokenPasswordAuthOperation : TKTokenAuthOperation
{
    NSString *_password;
    NSString *_localizedPasswordLabel;
}

@property (copy) NSString *localizedPasswordLabel; // @synthesize localizedPasswordLabel=_localizedPasswordLabel;
@property (copy) NSString *password; // @synthesize password=_password;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (Class)baseClassForUI;
- (void)encodeWithCoder:(id)arg1;
- (void)importOperation:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

