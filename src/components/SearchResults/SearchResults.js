import React from "react";
import './SearchResults.css';
import Tracklist from "../TrackList/Tracklist";

export class SearchResults extends React.Component {
  render() {
		return(
			<div className="SearchResults">
				<h2>Results</h2>
        {/* <!-- Add a TrackList component --> */}
				<Tracklist tracks={this.props.searchResults} onAdd={this.props.onAdd} IsRemoval={false}  />
      </div>
		);
	}
}