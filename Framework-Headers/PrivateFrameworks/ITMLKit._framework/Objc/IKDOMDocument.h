//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKDOMNode.h>

#import <ITMLKit/IKJSDOMDocument-Protocol.h>
#import <ITMLKit/IKJSDOMXPathEvaluator-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMElement, IKDOMImplementation, IKJSNavigationDocument, NSString;
@protocol IKJSDOMDocumentAppBridge;

@interface IKDOMDocument : IKDOMNode <IKJSDOMDocument, JSExport, IKJSDOMXPathEvaluator>
{
    id<IKJSDOMDocumentAppBridge> _appBridge;
    unsigned long long _itmlIDSequence;
}

@property (weak, nonatomic) id<IKJSDOMDocumentAppBridge> appBridge; // @synthesize appBridge=_appBridge;
@property (readonly, strong, nonatomic) IKDOMElement *documentElement;
@property (strong, nonatomic) NSString *documentURI;
@property (readonly, weak, nonatomic) IKDOMImplementation *implementation;
@property (readonly, strong, nonatomic) NSString *inputEncoding;
@property (nonatomic) unsigned long long itmlIDSequence; // @synthesize itmlIDSequence=_itmlIDSequence;
@property (weak, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (nonatomic) BOOL strictErrorChecking;
@property (readonly, strong, nonatomic) NSString *xmlEncoding;
@property (nonatomic) BOOL xmlStandalone;
@property (strong, nonatomic) NSString *xmlVersion;

+ (struct _xmlDoc *)_documentWithXMLStr:(id)arg1 lsInput:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)_updateITMLIDRecursivelyForNodePtr:(struct _xmlNode *)arg1;
- (id)adoptNode:(id)arg1;
- (id)createCDATASection:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createDocumentFragment;
- (id)createElement:(id)arg1;
- (id)createExpression:(id)arg1:(id)arg2;
- (id)createTextNode:(id)arg1;
- (id)evaluate:(id)arg1:(id)arg2:(id)arg3:(long long)arg4:(id)arg5;
- (id)getElementById:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (id)initWithAppContext:(id)arg1 input:(id)arg2 error:(id *)arg3;
- (id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2;
- (id)initWithAppContext:(id)arg1 xmlStr:(id)arg2 error:(id *)arg3;
- (BOOL)markUpdated;
- (id)nodeName;
- (long long)nodeType;
- (id)recordedImpressions;
- (void)replace:(id)arg1;
- (void)runTest:(id)arg1:(id)arg2;
- (void)scrollToTop;
- (void)setITMLIDForNode:(id)arg1;
- (void)setNeedsUpdate;
- (id)snapshotImpressions;

@end

