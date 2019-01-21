.. -*- rst -*-

======================
Network Segment Ranges
======================

The network segment range extension exposes the segment range management to be
administered via the Neutron API. It introduces the `network-segment-range`
resource for tenant network segment allocation. In addition, it introduces
the ability for the administrator to control the segment ranges globally or on
a per-tenant basis.

Lists, shows details for, creates, updates, and deletes network segment ranges.
The network segment ranges API is admin-only.

Show network segment range details
==================================

.. rest_method::  GET /v2.0/network_segment_ranges/{network_segment_range_id}

Shows details for a network segment range.

You can control which response parameters are returned by using the
fields query parameter. For information, see `Filtering and column
selection <http://specs.openstack.org/openstack/neutron-
specs/specs/api/networking_general_api_information.html#filtering-
and-column-selection>`__.

Normal response codes: 200

Error response codes: 401, 404

Request
-------

.. rest_parameters:: parameters.yaml

   - network_segment_range_id: network_segment_range_id-path

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - id: network_segment_range_id
   - name: name
   - default: network_segment_range-default
   - shared: network_segment_range-shared
   - tenant_id: project_id
   - project_id: project_id
   - network_type: network_segment_range-network_type
   - physical_network: network_segment_range-physical_network-body-required
   - minimum: network_segment_range-minimum-body-required
   - maximum: network_segment_range-maximum-body-required
   - available: network_segment_range-available
   - used: network_segment_range-used

Response Example
----------------

.. literalinclude:: samples/network_segment_ranges/network_segment_range-show-response.json
   :language: javascript

Update network segment range
============================

.. rest_method::  PUT /v2.0/network_segment_ranges/{network_segment_range_id}

Updates a network segment range.

Normal response codes: 200

Error response codes: 400, 401, 403, 404, 412

Request
-------

.. rest_parameters:: parameters.yaml

   - network_segment_range_id: network_segment_range_id-path
   - name: name-request
   - minimum: network_segment_range-minimum-body-optional
   - maximum: network_segment_range-maximum-body-optional

Request Example
---------------

.. literalinclude:: samples/network_segment_ranges/network_segment_range-update-request.json
   :language: javascript

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - id: network_segment_range_id
   - name: name
   - default: network_segment_range-default
   - shared: network_segment_range-shared
   - tenant_id: project_id
   - project_id: project_id
   - network_type: network_segment_range-network_type
   - physical_network: network_segment_range-physical_network-body-required
   - minimum: network_segment_range-minimum-body-required
   - maximum: network_segment_range-maximum-body-required
   - available: network_segment_range-available
   - used: network_segment_range-used

Response Example
----------------

.. literalinclude:: samples/network_segment_ranges/network_segment_range-update-response.json
   :language: javascript

Delete network segment range
============================

.. rest_method::  DELETE /v2.0/network_segment_ranges/{network_segment_range_id}

Deletes a network segment range.

Normal response codes: 204

Error response codes: 401, 404, 409, 412

Request
-------

.. rest_parameters:: parameters.yaml

   - network_segment_range_id: network_segment_range_id-path

Response
--------

There is no body content for the response of a successful DELETE request.

List network segment ranges
===========================

.. rest_method::  GET /v2.0/network_segment_ranges

Lists network segment ranges to which the admin has access.

Use the ``fields`` query parameter to filter the response. For
information, see `Filtering and Column Selection <https://wiki.open
stack.org/wiki/Neutron/APIv2-specification#Filtering_and_Column_Sel
ection>`__.

Normal response codes: 200

Error response codes: 401

Request
-------

.. rest_parameters:: parameters.yaml

   - id: network_segment_range_id-query
   - name: network_segment_range-name-query
   - tenant_id: project_id-query
   - project_id: project_id-query
   - network_type: network_segment_range-network_type-query
   - physical_network: network_segment_range-physical_network-query
   - sort_dir: sort_dir
   - sort_key: network_segment_range-sort_key
   - fields: fields

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - id: network_segment_range_id
   - name: name
   - default: network_segment_range-default
   - shared: network_segment_range-shared
   - tenant_id: project_id
   - project_id: project_id
   - network_type: network_segment_range-network_type
   - physical_network: network_segment_range-physical_network-body-required
   - minimum: network_segment_range-minimum-body-required
   - maximum: network_segment_range-maximum-body-required
   - available: network_segment_range-available
   - used: network_segment_range-used

Response Example
----------------

.. literalinclude:: samples/network_segment_ranges/network_segment_ranges-list-response.json
   :language: javascript

Create network segment range
============================

.. rest_method::  POST /v2.0/network_segment_ranges

Creates a network segment range.

Normal response codes: 201

Error response codes: 400, 401

Request
-------

.. rest_parameters:: parameters.yaml

   - name: network_segment_range-name
   - shared: network_segment_range-shared
   - project_id: project_id-body-optional
   - network_type: network_segment_range-network_type
   - physical_network: network_segment_range-physical_network-body-optional
   - minimum: network_segment_range-minimum-body-required
   - maximum: network_segment_range-minimum-body-required

Request Example
---------------

.. literalinclude:: samples/network_segment_ranges/network_segment_range-create-request.json
   :language: javascript

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - id: network_segment_range_id
   - name: name
   - default: network_segment_range-default
   - shared: network_segment_range-shared
   - tenant_id: project_id
   - project_id: project_id
   - network_type: network_segment_range-network_type
   - physical_network: network_segment_range-physical_network-body-required
   - minimum: network_segment_range-minimum-body-required
   - maximum: network_segment_range-maximum-body-required
   - available: network_segment_range-available
   - used: network_segment_range-used

Response Example
----------------

.. literalinclude:: samples/network_segment_ranges/network_segment_range-create-response.json
   :language: javascript