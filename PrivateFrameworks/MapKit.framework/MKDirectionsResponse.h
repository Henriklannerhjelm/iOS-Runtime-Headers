/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class GMMDirectionsResponse, NSMutableArray, MKRoute;



@interface MKDirectionsResponse : NSObject 
{
    GMMDirectionsResponse *_response;
    NSMutableArray *_routes;
    MKRoute *_route;
}

@property(readonly) BOOL routeAvailable;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(retain) MKRoute *route; /* unknown property attribute: V_route */
@property(retain) NSArray *routes; /* unknown property attribute: V_routes */
@property(readonly) GMMDirectionsResponse *response; /* unknown property attribute: V_response */


- (id)initWithResponse:(id)arg1 startSearchResult:(id)arg2 endSearchResult:(id)arg3;
- (BOOL)routeAvailable;
- (id)initWithDictionaryRepresentation:(id)arg1 startSearchResult:(id)arg2 endSearchResult:(id)arg3;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)route;
- (void)setRoute:(id)arg1;
- (id)routes;
- (void)setRoutes:(id)arg1;
- (id)response;

@end