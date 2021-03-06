//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class NSString, UIImageSymbolConfiguration;

@interface _TVImageSymbolDescription : NSObject <NSCopying>
{
    NSString *_symbolName;
    UIImageSymbolConfiguration *_imageSymbolConfiguration;
}

@property (strong, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // @synthesize imageSymbolConfiguration=_imageSymbolConfiguration;
@property (readonly, copy, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSymbolName:(id)arg1 imageSymbolConfiguration:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

